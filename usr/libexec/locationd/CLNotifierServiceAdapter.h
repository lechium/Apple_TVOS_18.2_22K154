//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService
{
    struct map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, int>>> _clients;	// 8 = 0x8
    struct CLNotifierBase *_notifier;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0020000000fd4d49
- (void).cxx_destruct;	// IMP=0x0010000000fd4d2c
@property(readonly, nonatomic) struct CLNotifierBase *notifier; // @synthesize notifier=_notifier;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (int)notifierClientNumForCoparty:(id)arg1;	// IMP=0x0010000000fd4b32
- (void)forget:(byref id)arg1;	// IMP=0x0010000000fd4a7b
- (void)unregister:(byref id)arg1 forNotification:(int)arg2;	// IMP=0x0010000000fd4a00
- (void)register:(byref id)arg1 forNotification:(int)arg2 registrationInfo:(id)arg3;	// IMP=0x0010000000fd497e
- (void)invalidate;	// IMP=0x0010000000fd4926
- (void)setAdaptedNotifier:(struct CLNotifierBase *)arg1;	// IMP=0x0010000000fd48a7
- (id)init;	// IMP=0x0010000000fd486a

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

