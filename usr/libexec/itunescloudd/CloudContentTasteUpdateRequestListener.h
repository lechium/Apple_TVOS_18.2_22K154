//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudContentTasteUpdateRequestListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSMutableDictionary *_contentTasteRequestHandlerToDSIDMap;	// 32 = 0x20
    _Bool _musicAppIsInstalled;	// 40 = 0x28
}

+ (id)sharedContentTasteRequestListener;	// IMP=0x002000000014944f
- (void).cxx_destruct;	// IMP=0x0020000000145bb5
- (void)_postContentTasteChangesForPendingItems;	// IMP=0x0010000000145848
- (void)_cancelAllContentTasteRequestHandlers;	// IMP=0x00100000001457ea
- (void)_updateContentTasteForItem:(id)arg1 invalidatingLocalCache:(_Bool)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000014568e
- (id)_adjustedContentTasteForLibraryEndpoint:(long long)arg1;	// IMP=0x00100000001455a3
- (id)_contentTasteRequestHandlerForConfiguration:(id)arg1 outError:(id *)arg2;	// IMP=0x0010000000145372
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000014511e
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(_Bool)arg1 configuration:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000145105
- (void)setContentTaste:(long long)arg1 forArtistStoreID:(long long)arg2 persistentID:(long long)arg3 timeStamp:(id)arg4 configuration:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000144feb
- (void)setContentTaste:(long long)arg1 forArtistStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000144f41
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 persistentID:(long long)arg3 timeStamp:(id)arg4 configuration:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000144e27
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000144d7d
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 persistentID:(long long)arg3 timeStamp:(id)arg4 configuration:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000144c46
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000144b8e
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 persistentID:(long long)arg4 timeStamp:(id)arg5 configuration:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000144a5d
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 timeStamp:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001449aa
- (void)removeContentTasteOperationsForConnectionConfiguration:(id)arg1;	// IMP=0x001000000014491c
- (void)updateContentTasteForConnectionConfiguration:(id)arg1 invalidateLocalCache:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000144865
- (void)handleContentTasteChangedNotification;	// IMP=0x001000000014481a
- (void)handleMusicAppRemoved;	// IMP=0x00100000001447cf
- (void)handleMusicAppInstalled;	// IMP=0x0010000000144784
- (void)stop;	// IMP=0x00100000001446a5
- (void)start;	// IMP=0x00100000001445c6
- (id)_init;	// IMP=0x00100000001444cf
- (id)init;	// IMP=0x001000000014448d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

