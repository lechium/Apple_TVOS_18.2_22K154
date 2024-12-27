//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface _GDViewAccessAssertion : NSObject
{
    long long _handle;	// 8 = 0x8
    _Bool _alwaysAvailable;	// 16 = 0x10
    NSString *_viewName;	// 24 = 0x18
    NSURL *_viewArtifactURL;	// 32 = 0x20
    NSString *_viewArtifactTableName;	// 40 = 0x28
    NSString *_viewArtifactKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000374cce
@property(readonly, nonatomic) NSString *viewArtifactKey; // @synthesize viewArtifactKey=_viewArtifactKey;
@property(readonly, nonatomic) _Bool alwaysAvailable; // @synthesize alwaysAvailable=_alwaysAvailable;
@property(readonly, nonatomic) NSString *viewArtifactTableName; // @synthesize viewArtifactTableName=_viewArtifactTableName;
@property(readonly, nonatomic) NSURL *viewArtifactURL; // @synthesize viewArtifactURL=_viewArtifactURL;
@property(readonly, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
- (void)dealloc;	// IMP=0x0000000000374b5e
- (id)initWithViewName:(id)arg1 extensionToken:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000374785

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

