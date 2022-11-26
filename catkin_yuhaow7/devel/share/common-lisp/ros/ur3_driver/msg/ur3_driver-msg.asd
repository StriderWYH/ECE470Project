
(cl:in-package :asdf)

(defsystem "ur3_driver-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "command" :depends-on ("_package_command"))
    (:file "_package_command" :depends-on ("_package"))
    (:file "gripper_input" :depends-on ("_package_gripper_input"))
    (:file "_package_gripper_input" :depends-on ("_package"))
    (:file "position" :depends-on ("_package_position"))
    (:file "_package_position" :depends-on ("_package"))
    (:file "robot1_command" :depends-on ("_package_robot1_command"))
    (:file "_package_robot1_command" :depends-on ("_package"))
    (:file "robot1_gripper_input" :depends-on ("_package_robot1_gripper_input"))
    (:file "_package_robot1_gripper_input" :depends-on ("_package"))
    (:file "robot1_position" :depends-on ("_package_robot1_position"))
    (:file "_package_robot1_position" :depends-on ("_package"))
    (:file "robot2_command" :depends-on ("_package_robot2_command"))
    (:file "_package_robot2_command" :depends-on ("_package"))
    (:file "robot2_gripper_input" :depends-on ("_package_robot2_gripper_input"))
    (:file "_package_robot2_gripper_input" :depends-on ("_package"))
    (:file "robot2_position" :depends-on ("_package_robot2_position"))
    (:file "_package_robot2_position" :depends-on ("_package"))
  ))