//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Notes/ICSearchIndexable-Protocol.h>

@class NSAttributedString, NSSet, NSString;
@protocol ICFolderObject;

@protocol ICSearchIndexableNote <ICSearchIndexable>
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *accountName;
@property(readonly, nonatomic) NSString *folderManagedIdentifier;
@property(readonly, nonatomic) id <ICFolderObject> folder;
@property(readonly, copy, nonatomic) NSString *folderNameForNoteList;
@property(readonly, copy, nonatomic) NSString *folderName;
@property(readonly, nonatomic) _Bool isUnsupported;
@property(readonly, nonatomic) _Bool isSharedReadOnly;
@property(readonly, nonatomic) _Bool isSharedViaICloudFolder;
@property(readonly, nonatomic) _Bool isSharedViaICloud;
@property(readonly, copy, nonatomic) NSAttributedString *attributedContentInfoText;
@property(readonly, copy, nonatomic) NSString *contentInfoText;
@property(readonly, copy, nonatomic) NSAttributedString *noteWithoutTitle;
@property(readonly, copy, nonatomic) NSString *noteAsPlainTextWithoutTitle;
@property(readonly, copy, nonatomic) NSAttributedString *trimmedAttributedTitle;
@property(readonly, copy, nonatomic) NSString *trimmedTitle;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool isPasswordProtected;
@property(readonly, nonatomic) long long currentStatus;
@property(readonly, nonatomic) _Bool isPinnable;
@property(readonly, nonatomic) _Bool isPinned;
@property(readonly, nonatomic) _Bool isDeletedOrInTrash;
@property(readonly, nonatomic) _Bool hasUnreadChanges;
@property(readonly, nonatomic) NSSet *noteCellKeyPaths;
@property(readonly, nonatomic) _Bool isModernNote;
@property(readonly, nonatomic) _Bool isSearchIndexableNote;

@optional
@property(readonly, copy, nonatomic) NSString *widgetInfoText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@end

