//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/NSObject-Protocol.h>

@class NSData;
@protocol CATSharingConnection;

@protocol CATSharingConnectionDelegate <NSObject>
- (void)connectionClosed:(id <CATSharingConnection>)arg1;
- (void)connection:(id <CATSharingConnection>)arg1 receivedData:(NSData *)arg2;
@end

