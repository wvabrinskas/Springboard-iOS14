//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <SpringBoard/SBSWidgetMetricsServiceServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, NSString;
@protocol OS_dispatch_queue, SBSWidgetMetricsProviding;

@interface SBWidgetMetricsServer : NSObject <BSServiceConnectionListenerDelegate, SBSWidgetMetricsServiceServerInterface>
{
    id <SBSWidgetMetricsProviding> _metricsProvider;
    NSMutableArray *_connections;
    FBServiceClientAuthenticator *_authenticator;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}


// Remaining properties
@property(readonly, nonatomic) FBServiceClientAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(readonly, copy, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) __weak id <SBSWidgetMetricsProviding> metricsProvider; // @synthesize metricsProvider=_metricsProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) Class superclass;
@end
