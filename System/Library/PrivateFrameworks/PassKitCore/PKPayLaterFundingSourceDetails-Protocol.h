//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSObject-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary;

@protocol PKPayLaterFundingSourceDetails <NSObject, NSSecureCoding, NSCopying>
@property(nonatomic) unsigned long long type;
- (NSDictionary *)dictionaryRepresentation;
- (id)initWithDictionary:(NSDictionary *)arg1 type:(unsigned long long)arg2;
@end

