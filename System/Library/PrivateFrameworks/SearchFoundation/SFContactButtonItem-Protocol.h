//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFButtonItem-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFPerson;

@protocol SFContactButtonItem <SFButtonItem>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *actionTypesToShow;
@property(retain, nonatomic) SFPerson *person;
@property(copy, nonatomic) NSString *contactIdentifier;
@end

