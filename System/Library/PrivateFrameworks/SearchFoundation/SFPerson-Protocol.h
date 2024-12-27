//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFPerson <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *photosIdentifier;
@property(copy, nonatomic) NSArray *emailAddresses;
@property(copy, nonatomic) NSArray *phoneNumbers;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *contactIdentifier;
@property(copy, nonatomic) NSString *personIdentifier;
@end

