//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_path;

__attribute__((visibility("hidden")))
@interface _HMNetworkPath : NSObject
{
    NSObject<OS_nw_path> *_nwPath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002739f0
@property(retain, nonatomic) NSObject<OS_nw_path> *nwPath; // @synthesize nwPath=_nwPath;
@property(readonly, nonatomic) int status;
- (id)initWithNwPath:(id)arg1;	// IMP=0x000000000027392f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

