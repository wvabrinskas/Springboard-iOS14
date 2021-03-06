/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChronoKit.framework/ChronoKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@interface ChronoKit.ExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol> {

	 _extensionsPublisher;
	 _addedPublisher;
	 _updatedPublisher;
	 _removedPublisher;
	 extensionsByIdentifier;
	 removedPluginUUIDsByIdentifier;
	 queue;
	 lookupLock;
	 lock;
	 nsExtensionDiscovererSubscription;
	 nsExtensionDiscoverer;
	 applicationWorkspace;
	 extensionFactory;

}
-(id)init;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)dealloc;
@end

