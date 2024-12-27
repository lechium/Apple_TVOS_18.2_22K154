//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol TILexiconRequestHandler
- (void)addEntryString:(NSString *)arg1 forRecentInputIdentifier:(NSString *)arg2;
- (void)requestRemovalOfLexiconForRecentInputIdentifier:(NSString *)arg1;
- (void)requestLexiconForRecentInputIdentifier:(NSString *)arg1 completionHandler:(void (^)(TIRecentInputs *))arg2;
- (void)requestLexiconFromBundlePath:(NSString *)arg1 completionHandler:(void (^)(TILexicon *))arg2;
@end

