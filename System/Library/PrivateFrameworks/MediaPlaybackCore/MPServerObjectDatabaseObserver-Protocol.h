//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPServerObjectDatabase, MPServerObjectDatabaseImportRequest, NSError;

@protocol MPServerObjectDatabaseObserver <NSObject>

@optional
- (void)database:(MPServerObjectDatabase *)arg1 didFinishImportRequest:(MPServerObjectDatabaseImportRequest *)arg2;
- (void)database:(MPServerObjectDatabase *)arg1 didFailImportRequest:(MPServerObjectDatabaseImportRequest *)arg2 withErrror:(NSError *)arg3;
@end

