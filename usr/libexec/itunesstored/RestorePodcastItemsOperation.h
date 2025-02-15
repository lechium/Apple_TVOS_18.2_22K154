//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray;
@protocol RestorePodcastItemsOperationDelegate;

@interface RestorePodcastItemsOperation : ISOperation
{
    NSArray *_downloadItems;	// 96 = 0x60
    NSMutableArray *_responses;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000018faf0
- (id)_newURLOperationForItem:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018f928
- (id)_newResponseWithItems:(id)arg1 error:(id)arg2;	// IMP=0x001000000018f8a0
- (id)_addResponseForItem:(id)arg1 operation:(id)arg2;	// IMP=0x001000000018f5b6
- (void)_addResponse:(id)arg1;	// IMP=0x001000000018f4d6
- (void)run;	// IMP=0x001000000018ec2a
@property(readonly) NSArray *responses;
@property(readonly) NSArray *downloadItems;
- (id)initWithDownloadItems:(id)arg1;	// IMP=0x001000000018eb46

// Remaining properties
@property __weak id <RestorePodcastItemsOperationDelegate> delegate; // @dynamic delegate;

@end

