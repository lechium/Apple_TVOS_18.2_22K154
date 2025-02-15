//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ApplicationHandle;

@interface ApplicationWorkspaceOperation : NSObject
{
    ApplicationHandle *_applicationHandle;	// 8 = 0x8
}

@property(readonly, nonatomic) ApplicationHandle *applicationHandle; // @synthesize applicationHandle=_applicationHandle;
- (void)runWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004d224
@property(readonly, nonatomic) _Bool blocksAppInstallation;
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x001000000004d1a3
- (void)dealloc;	// IMP=0x001000000004d168
- (id)initWithApplicationHandle:(id)arg1;	// IMP=0x001000000004d111

@end

