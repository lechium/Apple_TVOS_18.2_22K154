//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PBSuggestedUserProfilesArchive;

@protocol PBSuggestedUserProfilesArchiveControlling
@property(readonly, nonatomic, getter=isArchiveAvailable) _Bool archiveAvailable;
- (_Bool)removeArchiveWithError:(out id *)arg1;
- (PBSuggestedUserProfilesArchive *)loadArchiveWithError:(out id *)arg1;
@end

