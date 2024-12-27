//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/SFCollaborationItem-Protocol.h>

@class NSURL;

@protocol SFCollaborationFileURLItem <SFCollaborationItem>
@property(readonly, nonatomic) _Bool hasSeparateSendCopyRepresentation;
@property(readonly, nonatomic) _Bool isInSharedFolder;
@property(readonly, nonatomic) _Bool isCollaborativeURL;
@property(readonly, nonatomic) _Bool isThirdPartyFileProviderBacked;
@property(readonly, nonatomic) _Bool isiCloudDrive;
@property(readonly, nonatomic) _Bool isLocalStorage;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) NSURL *fileURL;
- (void)loadCopyRepresentationURLWithCompletionHandler:(void (^)(NSURL *))arg1;
@end

