//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADCalendarTransformer : NSObject
{
}

- (id)aceCommandForSiriResponse:(id)arg1 responseError:(id)arg2 forRequestCommand:(id)arg3;	// IMP=0x00200000000e6f0e
- (void)getSiriRequestForClientBoundAceCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e6e81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

