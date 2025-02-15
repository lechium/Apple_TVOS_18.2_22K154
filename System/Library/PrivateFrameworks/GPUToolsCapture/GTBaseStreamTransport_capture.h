//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSObject;
@protocol GTVMBuffer, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GTBaseStreamTransport_capture
{
    struct dy_transport_message_unpack_s *_tmu;	// 104 = 0x68
    id <GTVMBuffer> _messageBuffer;	// 112 = 0x70
    void *_messageBufferWritePtr;	// 120 = 0x78
    unsigned long long _bytesToRead;	// 128 = 0x80
    struct iovec _iov[3];	// 136 = 0x88
    NSData *_buffers[3];	// 184 = 0xb8
    NSObject<OS_dispatch_semaphore> *_sendSema;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_relayQueue;	// 216 = 0xd8
    struct dy_transport_message_unpack_s *_relayTmu;	// 224 = 0xe0
}

- (long long)_relayBuffer:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000009788
- (long long)_relayBufferInner:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000009577
- (long long)_sendMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000939d
- (_Bool)_packMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000091b1
- (long long)_writeBuffers:(id *)arg1;	// IMP=0x0000000000008f55
- (void)_clearBuffers;	// IMP=0x0000000000008f14
- (long long)_readAndAccumulate;	// IMP=0x0000000000008d72
- (long long)_performRead:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000008c3f
- (void)_allocateMessageBuffer;	// IMP=0x0000000000008b53
- (void)_unpackAndDispatchMessage;	// IMP=0x0000000000008884
- (long long)_syncTmuToHeader:(struct dy_transport_message_unpack_s *)arg1 ioBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008761
- (void)_waitEAGAIN;	// IMP=0x0000000000008752
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000000873a
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000008722
- (void)_scheduleInvalidation:(id)arg1;	// IMP=0x00000000000086e1
- (void)_invalidate;	// IMP=0x0000000000008644
- (void)dealloc;	// IMP=0x00000000000085d1
- (id)init;	// IMP=0x0000000000008452

@end

