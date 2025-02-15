//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSItemProvider.h>

@interface NSItemProvider (Sharing)
- (void)loadFileURLRequiringOpenInPlace:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00300000000f1c2d
- (void)loadURLClassWithPreviousError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00300000000f1ac9
- (id)preferredContentTypeForSavingWithCanOpenInPlace:(_Bool *)arg1;	// IMP=0x00300000000f1712
@property(readonly, nonatomic) _Bool supportsMessagesSendCopyRepresentation;
@property(readonly, nonatomic) _Bool supportsShareSheetSendCopyRepresentation;
@end

