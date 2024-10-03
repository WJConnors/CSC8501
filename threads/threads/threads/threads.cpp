#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Thread
{
public:
    Thread(){}
    virtual ~Thread() { CloseHandle(thread_handle); }
    virtual void start();
    virtual void join();
    virtual DWORD get_id() const { return tid; }
protected:
    virtual void run() = 0;
    friend DWORD thread_ftn(LPVOID T);
    HANDLE thread_handle;
    DWORD tid;
private:
    Thread(const Thread& src);
    Thread& operator=(const Thread& rhs);
};

class MutexClass
{
public:
    MutexClass();
    virtual ~MutexClass();
    virtual void lock_mutex();
    virtual void unlock_mutex();
protected:
    HANDLE mutex;
};

MutexClass::MutexClass()
{
    mutex = CreateMutex(
        NULL, FALSE, NULL
    );
}

MutexClass::~MutexClass()
{
    CloseHandle(mutex);
}

void MutexClass::lock_mutex()
{
    WaitForSingleObject(
        mutex,
        INFINITE
    );
}

void MutexClass::unlock_mutex()
{
    ReleaseMutex(mutex);
}

MutexClass mut;

DWORD thread_ftn(LPVOID T)
{
    Thread* t = static_cast<Thread*>(T);
    t->run();
    return NULL;
}

void Thread::start()
{
    thread_handle = CreateThread(
        NULL,
        0,
        (LPTHREAD_START_ROUTINE)&thread_ftn,
        (LPVOID)this,
        0,
        &tid);
}

void Thread::join()
{
    WaitForSingleObject(thread_handle, INFINITE);
}

class Producer : public Thread
{
protected:
    virtual void run();
};
class Consumer : public Thread
{
protected:
    virtual void run();
};

vector<string> buffer;

void Producer::run()
{
    mut.lock_mutex();
    buffer.push_back("Hello from Producer\n");
    mut.unlock_mutex();
}

void Consumer::run()
{
    BOOL done = FALSE;
    while (!done)
    {
        mut.lock_mutex();
        if (buffer.size() > 0)
        {
            cout << "got msg: " << buffer.front() << endl;
            done = TRUE;
        }
        mut.unlock_mutex();
    }
}

int main()
{
    Producer prod;
    Consumer cons;

    cons.start();
    Sleep(1000);
    prod.start();

    prod.join();
    cons.join();

    return 0;
}