//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, NSURL, TVImageProxy;

__attribute__((visibility("hidden")))
@interface TVPMediaItemContentProposal : NSObject
{
    _Bool _loadingStarted;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    double _presentationTime;	// 24 = 0x18
    NSNumber *_automaticAcceptanceInterval;	// 32 = 0x20
    NSURL *_previewImageURL;	// 40 = 0x28
    NSArray *_metadata;	// 48 = 0x30
    TVImageProxy *_imageProxy;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007b322
@property(nonatomic) _Bool loadingStarted; // @synthesize loadingStarted=_loadingStarted;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(retain, nonatomic) NSNumber *automaticAcceptanceInterval; // @synthesize automaticAcceptanceInterval=_automaticAcceptanceInterval;
@property(nonatomic) double presentationTime; // @synthesize presentationTime=_presentationTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool needsLoading;
- (unsigned long long)hash;	// IMP=0x000000000007b11c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007af2f
- (void)dealloc;	// IMP=0x000000000007aec4
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007ab78

@end

