//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVContentItem;

@protocol __TVExtensionWireProtocol
- (void)_xpc_topShelf_reportItemPlayed:(TVContentItem *)arg1 reply:(void (^)(void))arg2;
- (void)_xpc_topShelf_reportItemSelected:(TVContentItem *)arg1 reply:(void (^)(void))arg2;
- (void)_xpc_topShelf_fetchContentItemsWithResultHandler:(void (^)(long long, NSArray *))arg1;
- (void)_xpc_checkAdoptedProtocolsWithResultHandler:(void (^)(unsigned long long))arg1;
@end

