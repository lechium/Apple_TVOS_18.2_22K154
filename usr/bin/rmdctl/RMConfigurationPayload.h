//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, RMConfigurationPayloadState, RMConfigurationPayloadUI;

@interface RMConfigurationPayload
{
}

+ (_Bool)isSignificantChange:(id)arg1;	// IMP=0x0040000000006b59
- (id)reportDetails;	// IMP=0x0020000000006bd6

// Remaining properties
@property(retain, nonatomic) NSSet *assetReferences; // @dynamic assetReferences;
@property(retain, nonatomic) NSSet *configurationReferences; // @dynamic configurationReferences;
@property(retain, nonatomic) RMConfigurationPayloadState *state; // @dynamic state;
@property(retain, nonatomic) RMConfigurationPayloadUI *ui; // @dynamic ui;

@end

