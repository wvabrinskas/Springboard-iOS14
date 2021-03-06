/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@interface NTKCubicSpline : NSObject {

	SCD_Struct_NT11* _processedPoints;
	SCD_Struct_NT11* _controlPoints;
	SCD_Struct_NT11* _workspace;
	SCD_Struct_NT10* _splineMatrix;
	BOOL _closed;
	int _length;
	int _startIndex;
	 _a;
	 _b;
	 _c;
	 _d;

}
-(BOOL)isClosed;
-(void)process;
-(int)length;
-(void)dealloc;
-(void)_processSpline;
-(void)_processClosedSpline;
-(void)_processOpenSpline;
-(2)interpolateAt:(float)arg1 derivative:(2*)arg2 ;
-(id)initWithNumberOfControlPoints:(int)arg1 isClosed:(BOOL)arg2 ;
-(SCD_Struct_NT11*)controlPointsBuffer;
-(2)interpolateAt:(float)arg1 ;
-(void)interpolateWithSteps:(int)arg1 interpolation:(/*^block*/id)arg2 ;
-(void)getControlPoints:(1*)arg1 processedPoints:(2*)arg2 ;
@end

