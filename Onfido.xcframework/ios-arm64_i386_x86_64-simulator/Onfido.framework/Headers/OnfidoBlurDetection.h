//
//  OnfidoBlurDetection.h
//  Onfido
//
//  Created by Anurag Ajwani on 29/10/2019.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OnfidoBlurDetectionResult.h"

@interface OnfidoBlurDetection: NSObject

- (OnfidoBlurDetectionResult * _Nonnull) detect: (UIImage * _Nonnull) image
                                  withThreshold: (double) threshold;

@end
