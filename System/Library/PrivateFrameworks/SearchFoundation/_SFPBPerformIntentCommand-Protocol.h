//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _SFPBPerformIntentCommand <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *biomeStreamIdentifier;
@property(nonatomic) _Bool isRunnableWorkflow;
@property(copy, nonatomic) NSData *intentMessageData;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(copy, nonatomic) NSString *intentMessageName;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

