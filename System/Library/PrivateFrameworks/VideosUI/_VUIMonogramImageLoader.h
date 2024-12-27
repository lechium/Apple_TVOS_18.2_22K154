//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _VUIMonogramImageLoader : NSObject
{
    NSDictionary *_generatorByType;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x001000000007ee84
- (void).cxx_destruct;	// IMP=0x000000000007f6f2
- (id)_imageLoadError;	// IMP=0x000000000007f6c5
- (void)cancelLoad:(id)arg1;	// IMP=0x000000000007f61a
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000007f1f8
- (id)URLForObject:(id)arg1;	// IMP=0x000000000007f15a
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000000007f05c
- (id)init;	// IMP=0x000000000007eed9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

