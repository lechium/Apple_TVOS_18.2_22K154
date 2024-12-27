//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPFileMetadata, LPImage, LPLinkMetadata, NSObject, NSString, NSURL;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface LPFileMetadataProviderSpecialization
{
    _Bool _cancelled;	// 8 = 0x8
    NSURL *_temporaryFileURL;	// 16 = 0x10
    LPImage *_originalImage;	// 24 = 0x18
    LPImage *_quickLookThumbnail;	// 32 = 0x20
    LPImage *_smallQuickLookThumbnail;	// 40 = 0x28
    NSString *_MIMEType;	// 48 = 0x30
    NSString *_UTI;	// 56 = 0x38
    LPLinkMetadata *_metadata;	// 64 = 0x40
    LPFileMetadata *_fileMetadata;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_fetchGroup;	// 80 = 0x50
}

+ (id)_thumbnailQueue;	// IMP=0x00100000000bc16f
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;	// IMP=0x00100000000bc087
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;	// IMP=0x00100000000bbfbd
+ (unsigned long long)specialization;	// IMP=0x00100000000bbfb2
- (void).cxx_destruct;	// IMP=0x00000000000bde90
- (void)metadataProviderSpecializationDidFail:(id)arg1;	// IMP=0x00000000000bde7b
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;	// IMP=0x00000000000bdd2e
- (void)complete;	// IMP=0x00000000000bdc61
- (void)updatePreliminaryMetadata;	// IMP=0x00000000000bdb65
- (void)cancel;	// IMP=0x00000000000bdb48
- (void)cleanUpTemporaryFile;	// IMP=0x00000000000bdac8
- (void)generateFallbackMetadataForUnreachableFile:(id)arg1;	// IMP=0x00000000000bd8b0
- (void)fetchMetadataForReachableFile:(id)arg1;	// IMP=0x00000000000bcae1
- (_Bool)shouldUseQuickLookForFileType;	// IMP=0x00000000000bcab7
- (void)fetchMetadataFromURL:(id)arg1;	// IMP=0x00000000000bc7fa
- (void)start;	// IMP=0x00000000000bc1f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

