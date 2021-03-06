/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;
	BOOL _mirroringEnabled;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign) unsigned rendererFlags; 
@property (getter=isSecure) BOOL secure; 
+(id)server;
+(id)serverIfRunning;
+(id)context;
+(id)contextWithOptions:(id)arg1 ;
+(id)serverWithOptions:(id)arg1 ;
+(void)stopServer;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(unsigned)rendererFlags;
-(BOOL)isSecure;
-(NSArray *)displays;
-(id)init;
-(id)displayWithUniqueId:(id)arg1 ;
-(unsigned)taskNamePortOfContextId:(unsigned)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(void)addDisplay:(id)arg1 ;
-(id)description;
-(void)setSecure:(BOOL)arg1 ;
-(void)_detectDisplays;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(id)displayWithName:(id)arg1 ;
-(void)removeAllDisplays;
-(BOOL)isMirroringEnabled;
-(void)setRendererFlags:(unsigned)arg1 ;
-(id)_init;
-(id)secureModeViolations;
-(id)insecureProcessIds;
-(void)removeDisplay:(id)arg1 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(void)dealloc;
@end

