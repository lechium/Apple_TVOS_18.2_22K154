//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class CSSearchableItem, NSArray, NSString;

@protocol SGDSuggestManagerMessagesProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)harvestedSuggestionsFromMessages:(NSArray *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(SGXPCResponse3 *))arg4;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(SGXPCResponse3 *))arg4;
- (void)suggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(SGXPCResponse3 *))arg3;
@end

