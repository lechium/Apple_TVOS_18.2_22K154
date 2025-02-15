//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVWeakReferencingDelegateStorage, NSArray;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoRequest : NSObject
{
    AVWeakReferencingDelegateStorage *_delegateStorage;	// 8 = 0x8
    unsigned int _photoCallbackFlavor;	// 16 = 0x10
    AVCapturePhotoSettings *_unresolvedSettings;	// 24 = 0x18
    AVCaptureResolvedPhotoSettings *_resolvedSettings;	// 32 = 0x20
    NSArray *_expectedPhotoManifest;	// 40 = 0x28
    unsigned int _firedCallbackFlags;	// 48 = 0x30
    unsigned long long _firedPhotoCallbacksCount;	// 56 = 0x38
    struct __IOSurface *_previewSurface;	// 64 = 0x40
    struct opaqueCMSampleBuffer *_previewSampleBuffer;	// 72 = 0x48
    struct __IOSurface *_thumbnailSurface;	// 80 = 0x50
    _Bool _delegateSupportsDebugMetadataSidecarFile;	// 88 = 0x58
    _Bool _delegateSupportsMetadataIdentifiersCallback;	// 89 = 0x59
    _Bool _lensStabilizationSupported;	// 90 = 0x5a
}

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(_Bool)arg3;	// IMP=0x006000000004e45f
+ (void)initialize;	// IMP=0x006000000004e44e
@property(readonly) _Bool lensStabilizationSupported; // @synthesize lensStabilizationSupported=_lensStabilizationSupported;
@property(readonly) _Bool delegateSupportsMetadataIdentifiersCallback; // @synthesize delegateSupportsMetadataIdentifiersCallback=_delegateSupportsMetadataIdentifiersCallback;
@property(readonly) _Bool delegateSupportsDebugMetadataSidecarFile; // @synthesize delegateSupportsDebugMetadataSidecarFile=_delegateSupportsDebugMetadataSidecarFile;
@property(retain, nonatomic) struct __IOSurface *thumbnailSurface; // @synthesize thumbnailSurface=_thumbnailSurface;
@property(retain, nonatomic) struct opaqueCMSampleBuffer *previewSampleBuffer; // @synthesize previewSampleBuffer=_previewSampleBuffer;
@property(retain, nonatomic) struct __IOSurface *previewSurface; // @synthesize previewSurface=_previewSurface;
@property(nonatomic) unsigned long long firedPhotoCallbacksCount; // @synthesize firedPhotoCallbacksCount=_firedPhotoCallbacksCount;
@property(nonatomic) unsigned int firedCallbackFlags; // @synthesize firedCallbackFlags=_firedCallbackFlags;
@property(readonly, nonatomic) NSArray *expectedPhotoManifest; // @synthesize expectedPhotoManifest=_expectedPhotoManifest;
@property(readonly) AVCapturePhotoSettings *unresolvedSettings; // @synthesize unresolvedSettings=_unresolvedSettings;
@property(readonly) unsigned int photoCallbackFlavor; // @synthesize photoCallbackFlavor=_photoCallbackFlavor;
@property(readonly) AVWeakReferencingDelegateStorage *delegateStorage; // @synthesize delegateStorage=_delegateStorage;
- (void)_resolveExpectedPhotoManifest;	// IMP=0x000000000004e6b2
@property(retain, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property(readonly, nonatomic) unsigned long long expectedPhotoCount;
- (void)dealloc;	// IMP=0x000000000004e594
- (id)initWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(_Bool)arg3;	// IMP=0x000000000004e4aa

@end

