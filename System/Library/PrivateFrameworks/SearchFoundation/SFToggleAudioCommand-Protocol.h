//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFToggleAudioCommand <SFCommand>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *universalLibraryIdentifier;
@property(nonatomic) int mediaEntityType;
@property(copy, nonatomic) NSString *persistentIdentifier;
@property(copy, nonatomic) NSString *localMediaIdentifier;
@end

