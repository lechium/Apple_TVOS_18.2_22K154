//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ImageFileLoader : NSObject
{
}

- (id)moreResultsLoader;	// IMP=0x000000000025051d
- (id)cardLoader;	// IMP=0x0000000000250515
- (id)imageLoader;	// IMP=0x000000000025050c
- (id)urlForImage:(id)arg1 context:(id)arg2;	// IMP=0x00000000002507d9
- (void)loadImage:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000025064e
- (_Bool)canLoadImage:(id)arg1 context:(id)arg2;	// IMP=0x0000000000250525

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

