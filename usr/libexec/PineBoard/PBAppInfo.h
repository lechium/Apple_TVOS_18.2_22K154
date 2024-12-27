//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/PBSAppInfo.h>

@class FBSSceneIdentity, MISSING_TYPE, NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBAppInfo : PBSAppInfo
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000011812c
@property(readonly, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(readonly, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x0010000000118102
- (MISSING_TYPE *)classForCoder;	// IMP=0x00100000001180e0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001180a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011809d
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000117d3f
- (id)initWithAppInfo:(id)arg1;	// IMP=0x0010000000117c6f
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x0010000000117bf1
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x0010000000117b73
@property(readonly, nonatomic) FBSSceneIdentity *defaultSceneIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

