//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (PhotosUICore)
+ (id)px_thumbnailVideoDurationAttributedString:(id)arg1 layoutDirection:(unsigned long long)arg2 sizeClass:(long long)arg3;	// IMP=0x006000000057155f
+ (id)px_thumbnailVideoDurationAttributedString:(id)arg1 layoutDirection:(unsigned long long)arg2;	// IMP=0x006000000057154a
+ (id)px_stringWithFormat:(id)arg1 defaultAttributes:(id)arg2 arguments:(id)arg3;	// IMP=0x006000000056ffe6
+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2 emphasizedAttributes:(id)arg3 italicizedAttributes:(id)arg4;	// IMP=0x006000000056fdb8
+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2 emphasizedAttributes:(id)arg3;	// IMP=0x006000000056fd9c
+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x006000000056fd87
+ (id)px_localizedAttributedStringForUserInvitedToStreamWithName:(id)arg1 inviterName:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;	// IMP=0x006000000073d074
+ (id)px_localizedAttributedStringForPostAttributionOfAssetWithDisplayType:(long long)arg1 postedByUserOrSubjectWithFullName:(id)arg2 atDate:(id)arg3 nameAttributes:(id)arg4 dateAttributes:(id)arg5;	// IMP=0x006000000073cd48
+ (id)px_localizedAttributedStringForUserPostWithCountsSet:(id)arg1 subjectName:(id)arg2 captionText:(id)arg3 defaultTextAttributes:(id)arg4 posterTextAttributes:(id)arg5 captionTextAttributes:(id)arg6;	// IMP=0x006000000073c864
+ (id)px_localizedAttributedStringForUserPostWithCountsSet:(id)arg1 subjectName:(id)arg2 defaultTextAttributes:(id)arg3 posterTextAttributes:(id)arg4;	// IMP=0x006000000073c83a
+ (id)px_localizedAttributedStringForUserPostWithCountsSet:(id)arg1 defaultTextAttributes:(id)arg2 subjectName:(id)arg3;	// IMP=0x006000000073c815
+ (id)px_localizedAttributedStringForUserCreatingStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;	// IMP=0x006000000073c681
+ (id)px_localizedAttributedStringForInvitationResponseReceivedWithInviteeFullName:(id)arg1 sharedAlbumName:(id)arg2 accepted:(_Bool)arg3 defaultTextAttributes:(id)arg4 posterTextAttributes:(id)arg5 albumTextAttributes:(id)arg6;	// IMP=0x006000000073c498
+ (id)px_localizedAttributedStringForInvitationResponseReceivedWithInviteeFullName:(id)arg1 streamName:(id)arg2 accepted:(_Bool)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5 streamNameAttributes:(id)arg6;	// IMP=0x006000000073c2c4
+ (id)px_localizedAttributedStringForUserJoiningSharedAlbumWithName:(id)arg1 defaultTextAttributes:(id)arg2 posterTextAttributes:(id)arg3 albumTextAttributes:(id)arg4;	// IMP=0x006000000073c0e1
+ (id)px_localizedAttributedStringForUserJoiningStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;	// IMP=0x006000000073bf4d
+ (id)px_localizedAttributedStringForLikesWithLikerCount:(long long)arg1 isVideo:(_Bool)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;	// IMP=0x006000000073bd7c
+ (id)px_localizedAttributedStringForLikesFromUser:(_Bool)arg1 orPersonFullName:(id)arg2 photoCount:(long long)arg3 videoCount:(long long)arg4 streamName:(id)arg5 defaultTextAttributes:(id)arg6 emphasizedTextAttributes:(id)arg7 italicizedTextAttributes:(id)arg8;	// IMP=0x006000000073bb4f
+ (id)px_localizedAttributedStringForLikesFromUser:(_Bool)arg1 otherPeopleFullNames:(id)arg2 isVideo:(_Bool)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;	// IMP=0x006000000073ad39
+ (id)px_localizedAttributedStringForCommentWithCommenterFullName:(id)arg1 text:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;	// IMP=0x006000000073aba8
+ (id)px_localizedAttributedStringForUserCommentWithText:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;	// IMP=0x006000000073a978
+ (id)px_localizedAttributedStringForPostWithSubjectFullName:(id)arg1 photoCount:(long long)arg2 videoCount:(long long)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;	// IMP=0x006000000073a78c
+ (id)px_localizedAttributedStringForUserPostWithPhotoCount:(long long)arg1 videoCount:(long long)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;	// IMP=0x006000000073a570
- (struct CGSize)px_sizeWithProposedWidth:(double)arg1 maximumLines:(long long)arg2 drawingOptions:(long long)arg3;	// IMP=0x001000000056f8d1
- (_Bool)px_containsAttribute:(id)arg1;	// IMP=0x001000000056f7ed
- (_Bool)px_rangeExists:(struct _NSRange)arg1;	// IMP=0x001000000056f7b5
- (id)px_bulletPrefixAttributedStringWithBulletAttributes:(id)arg1 isLeftToRight:(_Bool)arg2;	// IMP=0x001000000056f6e7
- (id)px_stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;	// IMP=0x001000000056f536
- (id)px_attributedStringByDeletingCharactersInSet:(id)arg1;	// IMP=0x001000000056f3c2
- (id)px_attributedStringWithParagraphLineBreakMode:(long long)arg1;	// IMP=0x001000000056f282
- (id)px_attributedStringByApplyingCapitalization:(long long)arg1;	// IMP=0x001000000056eecb
- (id)px_attributedStringByAddingAttributes:(id)arg1;	// IMP=0x001000000056ee5c
@end

