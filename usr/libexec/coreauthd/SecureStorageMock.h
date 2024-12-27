//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SecureStorageMock : NSObject
{
}

- (void)aclForKey:(long long)arg1 contextUUID:(id)arg2 connection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0020000000010739
- (void)aclForKey:(long long)arg1 contextUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001069f
- (void)removeObjectForKey:(long long)arg1 contextUUID:(id)arg2 connection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010639
- (void)removeObjectForKey:(long long)arg1 contextUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001059f
- (void)objectForKey:(long long)arg1 contextUUID:(id)arg2 connection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010539
- (void)objectForKey:(long long)arg1 contextUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001049f
- (void)setObject:(id)arg1 acl:(id)arg2 forKey:(long long)arg3 contextUUID:(id)arg4 connection:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000010438
- (void)setObject:(id)arg1 acl:(id)arg2 forKey:(long long)arg3 contextUUID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000010358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

