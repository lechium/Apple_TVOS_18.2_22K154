//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicLibrary/NSObject-Protocol.h>

@class ML3DatabaseConnection, ML3DatabaseConnectionPool;

@protocol ML3DatabaseConnectionPoolDelegate <NSObject>

@optional
- (void)connectionPool:(ML3DatabaseConnectionPool *)arg1 createdNewConnection:(ML3DatabaseConnection *)arg2;
@end

