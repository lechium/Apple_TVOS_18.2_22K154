//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFoundation/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol UAPasteboardItemProviding <NSObject>
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSUUID *uuid;
- (void)getDataWithCompletionBlock:(void (^)(NSInputStream *, NSError *))arg1;
@end

