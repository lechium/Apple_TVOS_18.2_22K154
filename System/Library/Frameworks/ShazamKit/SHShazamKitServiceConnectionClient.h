//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHShazamKitClient;

__attribute__((visibility("hidden")))
@interface SHShazamKitServiceConnectionClient : NSObject
{
    id <SHShazamKitClient> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000061f2
@property(nonatomic) __weak id <SHShazamKitClient> delegate; // @synthesize delegate=_delegate;
- (void)didCalculateSpectralData:(id)arg1;	// IMP=0x0000000000006124
- (void)_libraryDidCompleteSync:(id)arg1;	// IMP=0x000000000000607d
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;	// IMP=0x0000000000005fa5
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;	// IMP=0x0000000000005ede
- (void)_libraryWillBeginSync:(id)arg1;	// IMP=0x0000000000005e37
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x0000000000005d70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

