//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Matter/NSObject-Protocol.h>

@class NSData, NSString;

@protocol MTRStorage <NSObject>
- (_Bool)removeStorageDataForKey:(NSString *)arg1;
- (_Bool)setStorageData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSData *)storageDataForKey:(NSString *)arg1;
@end

