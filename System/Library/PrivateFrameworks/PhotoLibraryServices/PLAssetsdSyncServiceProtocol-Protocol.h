//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol PLAssetsdSyncServiceProtocol <NSObject>
- (void)finalizeOTARestoreRecreatingAlbums:(_Bool)arg1;
- (void)updateRestoredAssetWithUUID:(NSString *)arg1 paths:(NSArray *)arg2 fixAddedDate:(_Bool)arg3;
@end

