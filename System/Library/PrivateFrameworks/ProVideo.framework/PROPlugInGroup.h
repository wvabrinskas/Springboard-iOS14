/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugInGroup : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)name;
-(id)displayName;
-(CFUUIDRef)uuid;
-(id)plugIns;
-(id)plugInsForProtocols:(id)arg1 ;
-(void)addPlugIn:(id)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 name:(id)arg2 bundle:(id)arg3 ;
-(void)removePlugIn:(id)arg1 ;
@end
