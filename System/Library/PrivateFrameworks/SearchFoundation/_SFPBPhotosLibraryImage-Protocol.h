//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBPerson;

@protocol _SFPBPhotosLibraryImage <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(copy, nonatomic) NSArray *peopleInPhotos;
@property(nonatomic) _Bool isSyndicated;
@property(copy, nonatomic) NSString *photoIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPerson *)peopleInPhotoAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleInPhotoCount;
- (void)addPeopleInPhoto:(_SFPBPerson *)arg1;
- (void)clearPeopleInPhoto;
@end

