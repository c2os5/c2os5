#ifndef __LOCK_H__
#define __LOCK_H__

extern void basic_lock();
extern void basic_unlock();

typedef struct lock
{
  volatile int locked;
} lock_t;

extern int atomic_swap(lock_t *);

extern void lock_init(lock_t *lock);

extern void lock_acquire(lock_t *lock);

extern void lock_free(lock_t *lock);

#endif
