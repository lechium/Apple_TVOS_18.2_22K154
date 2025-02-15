//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSPersonNameComponents, NSString;
@protocol PXPerson, PXSharedLibraryImageProvider;

@protocol PXSharedLibraryParticipant <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) _Bool isCurrentUser;
@property(readonly, nonatomic) id <PXSharedLibraryImageProvider> imageProvider;
@property(readonly, nonatomic) id <PXPerson> person;
@property(readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
@property(readonly, copy, nonatomic) NSString *emailAddress;
@end

