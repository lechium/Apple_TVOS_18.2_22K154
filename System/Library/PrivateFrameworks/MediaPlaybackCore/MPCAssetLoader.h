//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerItemConfigurator;
@protocol MPCAssetLoaderDelegate;

__attribute__((visibility("hidden")))
@interface MPCAssetLoader : NSObject
{
    id <MPCAssetLoaderDelegate> _delegate;	// 8 = 0x8
    MPCPlayerItemConfigurator *_configurator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e3b43
@property(retain, nonatomic) MPCPlayerItemConfigurator *configurator; // @synthesize configurator=_configurator;
@property(nonatomic) __weak id <MPCAssetLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_configureItem:(id)arg1 playerItem:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001e3844
- (double)unloadingPlaybackAssetsOnIdleDuration;	// IMP=0x00000000001e37ed
- (void)loadAssetValuesFor:(id)arg1 keys:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e36ab
- (void)loadAssetFor:(id)arg1 task:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e32c1
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001e325d

@end

