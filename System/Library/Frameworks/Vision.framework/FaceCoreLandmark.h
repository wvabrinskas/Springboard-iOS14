/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/libfaceCore.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libfaceCore.dylib/libfaceCore.dylib-Structs.h>
@class NSString;

@interface FaceCoreLandmark : NSObject {

	NSString* type;
	unsigned long long pointCount;
	CGPoint* points;

}

@property (readonly) NSString * type; 
@property (readonly) unsigned long long pointCount; 
@property (readonly) CGPoint* points; 
+(id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(CGPoint*)arg3 ;
-(NSString *)type;
-(CGPoint*)points;
-(unsigned long long)pointCount;
-(void)dealloc;
-(id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(CGPoint*)arg3 ;
@end
