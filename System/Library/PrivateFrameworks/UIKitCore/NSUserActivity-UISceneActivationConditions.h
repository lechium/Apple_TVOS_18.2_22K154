//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@class BSProcessHandle, NSString;

@interface NSUserActivity (UISceneActivationConditions)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0020000000fc20b4
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0020000000fc1eac
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0020000000fc1e45
@property(copy, nonatomic) NSString *targetContentIdentifier;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000fc211b
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000fc1ff6
- (void)_setOriginatingProcess:(id)arg1;	// IMP=0x00100000015e6555
- (void)_setSourceApplication:(id)arg1;	// IMP=0x00100000015e653f
@property(readonly, nonatomic) BSProcessHandle *_originatingProcess;
@property(readonly, nonatomic) NSString *_sourceApplication;
@end

