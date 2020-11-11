/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLInsetsJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLInsets : NSObject <TMLInsetsJSExports, NSCopying> {

	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) double top; 
@property (nonatomic,readonly) double left; 
@property (nonatomic,readonly) double bottom; 
@property (nonatomic,readonly) double right; 
+(void)initializeJSContext:(id)arg1 ;
-(double)bottom;
-(id)description;
-(double)top;
-(double)right;
-(id)initWithInsets:(UIEdgeInsets)arg1 ;
-(id)UIEdgeInsetsValue;
-(double)left;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)UIEdgeInsets;
@end
