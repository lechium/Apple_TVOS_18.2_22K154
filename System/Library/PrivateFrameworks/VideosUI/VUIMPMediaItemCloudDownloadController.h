//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPStoreDownload, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemCloudDownloadController
{
    MPStoreDownload *_storeDownload;	// 8 = 0x8
}

+ (id)_stateFromStoreDownload:(id)arg1;	// IMP=0x0010000000027158
- (void).cxx_destruct;	// IMP=0x000000000002761e
@property(retain, nonatomic) MPStoreDownload *storeDownload; // @synthesize storeDownload=_storeDownload;
- (void)_removeStoreObserver;	// IMP=0x000000000002751c
- (void)_addStoreObserver;	// IMP=0x000000000002743f
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;	// IMP=0x00000000000270b5
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;	// IMP=0x0000000000027012
- (void)_onProcessingQueue_resumeDownload;	// IMP=0x0000000000026f3f
- (void)_onProcessingQueue_pauseDownload;	// IMP=0x0000000000026e6c
- (void)_onProcessingQueue_cancelDownload;	// IMP=0x0000000000026d99
- (void)_onProcessingQueue_invalidate;	// IMP=0x0000000000026d41
- (_Bool)isRestoreDownload;	// IMP=0x0000000000026cfd
- (_Bool)supportsPausing;	// IMP=0x0000000000026cf5
- (void)dealloc;	// IMP=0x0000000000026cb7
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;	// IMP=0x0000000000026c48
- (id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2;	// IMP=0x00000000000269d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

