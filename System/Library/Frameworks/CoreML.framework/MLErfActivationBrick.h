/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EspressoBrick.h>

@class NSString;

@interface MLErfActivationBrick : NSObject <EspressoBrick> {

	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParameters:(id)arg1 ;
-(unsigned long long)size;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
@end
