//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class BSServiceConnectionEndpoint;

@protocol SBSUIStarkNotificationsSceneSettings <NSObject>
@property(readonly, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint;
@property(readonly, nonatomic) unsigned long long suspensionReasons;
@property(readonly, nonatomic, getter=isGeoSupported) _Bool geoSupported;
@property(readonly, nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@end
